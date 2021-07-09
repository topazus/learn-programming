// error handling
enum PrinterError: Error {
    case outOfPaper
    case noToner
    case onFire
}

func send(job _: Int, toPrinter printerName: String) throws -> String {
    switch printerName {
    case "out of paper":
        throw PrinterError.outOfPaper
    case "no toner":
        throw PrinterError.noToner
    case "on fire":
        throw PrinterError.onFire
    default:
        return "Job sent"
    }
}

do {
    let printerResponse = try send(job: 1040, toPrinter: "Bi Sheng")
    print(printerResponse)
} catch {
    print(error)
}

do {
    let printerResponse = try send(job: 1440, toPrinter: "out of fire")
    print(printerResponse)
} catch PrinterError.onFire {
    print("I'll just put this over here, with the rest of the fire.")
} catch let printerError as PrinterError {
    print("Printer error: \(printerError).")
} catch {
    print(error)
}

let printerSuccess = try? send(job: 1884, toPrinter: "Mergenthaler")
let printerFailure = try? send(job: 1885, toPrinter: "no toner")

var fridgeIsOpen = false
let fridgeContent = ["milk", "eggs", "leftovers"]

func fridgeContains(_ food: String) -> Bool {
    fridgeIsOpen = true
    defer {
        fridgeIsOpen = false
    }

    let result = fridgeContent.contains(food)
    return result
}

let res = fridgeContains("banana")
print(fridgeIsOpen)
