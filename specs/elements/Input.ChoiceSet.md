<!-- AUTO-GENERATED: This section is auto-generated from schemas/adaptive-card.json. Do NOT add anything above this or edit anything inside, it MUST be the first thing in the document and will be overwritten. -->

# Input.ChoiceSet

| Property | Type | Required | Description | Version |
| -------- | ---- | -------- | ----------- | ------- |
| **type** | `string` | Depends | Must be `"Input.ChoiceSet"`. | 1.0 |
| **choices** | `Input.Choice[]` | Yes | `Choice` options. | 1.0 |
| **isMultiSelect** | `boolean` | No | Allow multiple choices to be selected. | 1.0 |
| **style** | `ChoiceInputStyle` | No |  | 1.0 |
| **value** | `string` | No | The initial choice (or set of choices) that should be selected. For multi-select, specify a comma-separated string of values. | 1.0 |
| **wrap** | `boolean` | No | If `true`, allow text to wrap. Otherwise, text is clipped. | 1.0 |
| **id** | `string` | Yes | Unique identifier for the value. Used to identify collected input when the Submit action is performed. | 1.0 |
| **spacing** | `Spacing` | No | Controls the amount of spacing between this element and the preceding element. | 1.0 |
| **separator** | `boolean` | No | When `true`, draw a separating line at the top of the element. | 1.0 |
<!-- END AUTO-GENERATED -->

## Rendering