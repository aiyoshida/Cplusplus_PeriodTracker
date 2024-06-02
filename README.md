# Period Tracker Application

## Overview
This Period Tracker application is developed as part of the "Basic of Programming 2" course assignment by Ai Yoshida (Neptun code: FPYYT9). The purpose of this application is to manage and track PMS and period data. Users can input and save data, which can be displayed in various formats.

## Features
- **Data Input**: Users can input the following details:
  - Date (year, month, day)
  - Body condition level (0 to 9)
  - Period start and end dates
- **File Handling**: Data is saved to and read from text files using serialization.
- **Exception Handling**: Ensures users input correct values.
- **Dynamic Data Allocation**: Uses dynamic memory allocation for objects of class PMS and Period.

## Classes and Methods

### PMS Class
Handles PMS data.
```cpp
class PMS {
private:
    std::string PMS_all;
    int date_year;
    int date_month;
    int date_day;
    int body_condi;

public:
    PMS();
    PMS(std::string str);
    ~PMS();

    std::string str_getter() { return PMS_all; }
    int date_year_getter() { return date_year; }
    int date_month_getter() { return date_month; }
    int date_day_getter() { return date_day; }
    int body_condi_getter() { return body_condi; }
};
