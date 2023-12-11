import java.util.*
fun main() {
    val scanner = Scanner(System.`in`)
    val numberOfCases = scanner.nextInt() // Renamed variable to 'numberOfCases'

    for (i in 0 until numberOfCases) {
        val s = scanner.nextLine()

        var index = s.length - 1 // Renamed variable to 'index'

        while (index >= 0 && !s[index].isLetter()) {
            index--
        }

        println(s.substring(0, index + 1))
    }
}
