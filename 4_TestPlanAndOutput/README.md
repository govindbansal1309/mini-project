# Test Plan

## High Level Test Plan

| ID  | Description | Expected behavior | Actual Behavior | Feature Implemented | Test Case Run |
|-----|-------------|--------------|------------|---------------------|---------------|
| 1   | Adding proper type of details in proper places | The system should be able to accept proper data | Success | Implemented | NO |
| 2   | Adding improper details | The system should warn the user to put correct data | Success | Implemented | NO |
| 3   | Editing details of a particular item | THe system should edit the details | Success | Implemented | NO |
| 4   | Editing details of a non existent ID | The system should warn the user to enter correct ID | Success | Implemented | NO |
| 5   | Searching for a particular item | The system should display the details of the ID required | Success |  Implemented | NO |
| 6   | Seaching for a non existent ID | The system should warn the user to enter correct ID | Success |  Implemented | NO |
| 7   | Deleting an item details | The system should delete the item record | Success |  Implemented | NO |
| 8   | Deleting a non existent item | The system should warn the user to enter correct ID | Success | Implemented | NO |


## Low Level Test Plan

| ID  | Description | Expected Behavior | Actual Behavior | Feature Implemented | Test Case Run |
|-----|-------------|--------------|------------|---------------------|---------------|
| 1.1 | Add integer in product ID, string in product name and company name, int in price and quantity| System takes all inputs | Success | Implemented | NO |
| 2.1 | Add characater in ID, price and quantity | Warn User and Take input again | Success | Implemented | NO |
| 2.2 | Add integer in product name and company name | Warn User and Take input again | Success | Implemented | NO |
| 3.1 | Select the edit option, enter ID and edit the details of that particular ID | System replaces the old details with the new ones | Success | Implemented | NO |
| 4.1 | Select the edit option, enter a random ID | Warn user about non existent ID and take new input | Success | Implemented | NO |
| 5.1 | Select the search option, enter ID | The system should display the details of the particular ID | Success | Implemented | NO |
| 6.1 | Select the search option, enter a random ID | Warn user about non existent ID and take new input | Success | Implemented | NO |
| 7.1 | Select the delete option, enter ID | The system should delete the details of the particular ID | Success | Implemented | NO |
| 8.1 | Select the delete option, enter a random ID | Warn user about non existent ID and take new input | Success | Implemented | NO |
