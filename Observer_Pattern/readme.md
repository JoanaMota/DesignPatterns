# [The Observer Patter](https://refactoring.guru/design-patterns/observer)
## Steps for creating the Weather Data Application:
### 1. Create Interfaces
- Subject -> Weather Data
- Observers: Observer and Display Element -> All Displays of info
### 2. Create Concrete implementation of Subject
- Weather Data
### 3. Create Concrete implementations of Observers
- CurrentConditions Display
- Statistics Display
- Forecast Display

## Expected Output:
```
CWeatherData Constructed
Hello! I am the Current Conditions Observer
Hello! I am the Statistics Observer
Hello! I am the Heat Index Observer
Number of Observers: 3
Waiting for update on Measurements
Current conditions are: 1.000000 degrees and 2.000000% of humidity.
The Average Temperature is: 1.000000
The Heat Index is: 10.000000
Current conditions are: 4.000000 degrees and 5.000000% of humidity.
The Average Temperature is: 2.500000
The Heat Index is: 40.000000
Current conditions are: 10.000000 degrees and 20.000000% of humidity.
The Average Temperature is: 5.000000
The Heat Index is: 100.000000
Current conditions are: 40.000000 degrees and 50.000000% of humidity.
The Average Temperature is: 13.750000
The Heat Index is: 400.000000
I am the Statistics Observer and I remove myself from the observers list. Goodbye!
Number of Observers: 2
I am the Current Conditions Observer and I remove myself from the observers list. Goodbye!
Number of Observers: 1
I am the Heat Index Observer and I remove myself from the observers list. Goodbye!
Number of Observers: 0
CWeatherData Destroyed
```