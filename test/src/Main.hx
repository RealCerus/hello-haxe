import Math.random as rnd;

class Main {
    static public function main() {
        trace("Hello, world!");

        makeBreak("Funcs with optional params");

        // (?i : Int, ?s : String) -> String
        trace($type(test));
        trace(test()); // i: null, s: null
        trace(test(1)); // i: 1, s: null
        trace(test(1, "foo")); // i: 1, s: foo
        trace(test("foo")); // i: null, s: foo

        makeBreak("Func with optional param & string addition");

        var f:Int = 1;

        trace(hello());
        trace(hello("idiot"));

        makeBreak("Loop & print through array");

        print([1, 546, 43]);
        print(["fghdfg", "fgdfgfddsfsdfdf"]);

        makeBreak("Loop stuff");

        loops();

        makeBreak("Nested function");

        var fun:Void -> String = function() {return "str";}

        trace(fun());

        makeBreak("Import with alias and random");

        for(n in 0...5) trace(rnd());

        makeBreak("Types");

        var type = {
            x: 1,
            y: 2,
            n: {
                i: 0
            }
        };
        trace(type);

        var type = {
            "field1": 1,
            "some-string": "lol",
            "nested": {
                "bool": true,
                "floatyyy": 1.0
            }
        };
        trace(type);
        trace('bool from nested = ${type.nested.bool}');
    }

    static public function makeBreak(secName:String = "") {
        trace("------------------------ " + secName);
    }

    static inline function test(?i:Int, ?s:String) {
        return "i: " + i + ", s: " + s;
    }

    static public function hello(str:String = "world"):String {
        return "Hello " + str;
    }

    static public function print<T>(it:Iterable<T>) {
        for (o in it) trace(o);
    }

    static public function loops() {
        for (i in 0...5) {
            trace('First loop index is $i');
        }
        for (i in [1, 4, 2, 67, 12]) {
            trace('Second loop value is $i');
        }
    }
}
