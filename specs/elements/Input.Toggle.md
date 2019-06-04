<!-- AUTO-GENERATED: This section is auto-generated from schemas/adaptive-card.json. Do NOT add anything above this or edit anything inside, it MUST be the first thing in the document and will be overwritten. -->

# Input.Toggle

| Property | Type | Required | Description | Version |
| -------- | ---- | -------- | ----------- | ------- |
| **type** | `string` | Depends | Must be `"Input.Toggle"`. | 1.0 |
| **title** | `string` | Yes | Title for the toggle | 1.0 |
| **value** | `string` | No, default: false | The current selected value. If the item is selected that "valueOn" will be used, otherwise "valueOff" | 1.0 |
| **valueOff** | `string` | No, default: false | The value when toggle is off | 1.0 |
| **valueOn** | `string` | No, default: true | The value when toggle is on | 1.0 |
| **wrap** | `boolean` | No | If `true`, allow text to wrap. Otherwise, text is clipped. | 1.0 |
| **id** | `string` | Yes | Unique identifier for the value. Used to identify collected input when the Submit action is performed. | 1.0 |
| **spacing** | `Spacing` | No | Controls the amount of spacing between this element and the preceding element. | 1.0 |
| **separator** | `boolean` | No | When `true`, draw a separating line at the top of the element. | 1.0 |
<!-- END AUTO-GENERATED -->

## Rendering