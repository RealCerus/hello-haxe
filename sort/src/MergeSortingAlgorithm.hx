import haxe.ds.List;

class MergeSortingAlgorithm implements SortingAlgorithm {
    public function new() {
    }

    public function sort(ogList:List<Int>):List<Int> {
        var list = new List<Int>();
        for(item in ogList) list.add(item);

        if (list.length <= 1) return list;

        var list1:List<Int> = new List();
        var list2:List<Int> = new List();

        var half:Int = Std.int(list.length / 2);

        for (idx in 0...list.length) {
            if (idx < half) {
                list1.add(list.pop());
            } else {
                list2.add(list.pop());
            }
        }

        list1 = sort(list1);
        list2 = sort(list2);

        return merge(list1, list2);
    }

    private function merge(list1:List<Int>, list2:List<Int>):List<Int> {
        var newList:List<Int> = new List();

        while (!list1.isEmpty() && !list2.isEmpty()) {
            var item1 = list1.pop();
            var item2 = list2.pop();
            if (item1 <= item2) {
                newList.add(item1);
                list2.push(item2);
            } else {
                newList.add(item2);
                list1.push(item1);
            }
        }
        while (!list1.isEmpty())
            newList.add(list1.pop());
        while (!list2.isEmpty())
            newList.add(list2.pop());

        return newList;
    }

}
