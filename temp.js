const fs = require('fs');
const csv = require('csv-parser');

// Read the CSV file
const csvData = [];
fs.createReadStream('ISINs.csv')
    .pipe(csv())
    .on('data', (row) => {
        csvData.push(row);
    })
    .on('end', () => {
        // Read the existing JSON file
        const existingJson = require('./allMFs.json');
        const tempArray = [];
        // Create the final JSON structure
        const finalJson = {
            universe: csvData.map(csvRow => {
                const matchingObject = existingJson.universe.find(jsonObj => jsonObj.isin === csvRow['ISIN Code']);
                if (matchingObject) {
                    tempArray.push(matchingObject.mfId);
                    return {
                        isin: matchingObject.isin,
                        name: matchingObject.name,
                        visible: matchingObject.visible,
                        active: matchingObject.active,
                        mfid: matchingObject.mfId
                    };
                } else {
                    // tempArray.push(" ");
                    return { isin: csvRow['ISIN Code'] };
                }
            })
        };


        console.log(JSON.stringify(tempArray));
        console.log(tempArray.length);
        // Save the final JSON to a new file
        fs.writeFileSync('final_json_file.json', JSON.stringify(finalJson, null, 2));

        console.log('Final JSON file created successfully.');
    });
