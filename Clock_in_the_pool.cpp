import java.io.BufferedReader
import java.io.InputStreamReader
import java.util.StringTokenizer

fun main() {
    val br = BufferedReader(InputStreamReader(System.`in`))
    val t = br.readLine().trim().toInt()
    val out = StringBuilder()

    repeat(t) {
        val st = StringTokenizer(br.readLine())
        val k = st.nextToken().toLong()
        val m = st.nextToken().toLong()

        val a = (m + k) / k
        val res = when (a % 3) {
            0L -> 0L
            2L -> a * k - m
            else -> (a + 1) * k - m
        }
        out.append(res).append('\n')
    }

    print(out.toString())
}
