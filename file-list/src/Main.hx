import sys.FileSystem;
class Main {
    static public function main() {
        var args = Sys.args();
        var path = ".";

        if (args.length != 0) {
            path = args[args.length - 1];
        }

        if (!FileSystem.isDirectory(path)) {
            path = ".";
        }

        trace('Printing files in directory $path:');
        print(path);
    }

    static private function print(offset:Int = 0, startPath:String = ".") {
        var buf = new StringBuf();
        for (n in 0...offset) buf.add(" ");

        for (path in FileSystem.readDirectory(startPath)) {
            trace(buf.toString() + path);
            if (FileSystem.isDirectory(startPath + path) || FileSystem.isDirectory(path)) {
                print(offset + 3, (FileSystem.isDirectory(startPath + path) ? (startPath + path) : (path)) + "/");
            }
        }
    }
}
