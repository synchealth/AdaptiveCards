<!-- AUTO-GENERATED: This section is auto-generated from schemas/adaptive-card.json. Do NOT add anything above this or edit anything inside, it MUST be the first thing in the document and will be overwritten. -->

# ColumnSet

| Property | Type | Required | Description | Version |
| -------- | ---- | -------- | ----------- | ------- |
| **type** | `"ColumnSet"` |  No | Must be `ColumnSet` | 1.0 |
| **columns** | `Column[]` |  No | The array of `Columns` to divide the region into. | 1.0 |
| **selectAction** | `any` |  No | An Action that will be invoked when the `ColumnSet` is tapped or selected. `Action.ShowCard` is not supported. | 1.1 |
| **style** | `null` |  No | Style hint for `ColumnSet`. | 1.2 |
| **bleed** | `boolean` |  No | Determines whether the element should bleed through its parent's padding. | 1.2 |
| **backgroundImage** | `object` |  No | Specifies the background image. | 1.2 |
| **id** | `any` |  No | &nbsp; | 1.0 |
| **spacing** | `any` |  No | &nbsp; | 1.0 |
| **separator** | `any` |  No | &nbsp; | 1.0 |
<!-- END AUTO-GENERATED -->


## Rendering

1. If `columns` is null or empty, render as a zero-height element.
1. Otherwise, render each valid column sequentially, from left to right. See the column widths section for determining widths.
1. The final height of each column is determined by the height of the tallest column.

### Column widths

To determine the width of each column...

1. When given the final width of the entire ColumnSet...
1. Subtract the widths of any columns with pixel widths specified.
1. Then, sequentially ask each auto-width column how much space they need, given the remaining available width, and subtract that width from the remaining width before asking the next auto-width column.
1. Then, distribute the remaining width across the stretch-width columns. If one column has a weight of 2 and another 1, then that column gets twice as much space as the other.
1. If at any point remaining space goes to 0 or lower, the rest of the columns get 0 width.