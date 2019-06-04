<!-- AUTO-GENERATED: This section is auto-generated from schemas/adaptive-card.json. Do NOT add anything above this or edit anything inside, it MUST be the first thing in the document and will be overwritten. -->

# Input.Text

| Property | Type | Required | Description | Version |
| -------- | ---- | -------- | ----------- | ------- |
| **type** | `string` | Depends | Must be `"Input.Text"`. | 1.0 |
| **isMultiline** | `boolean` | No | If `true`, allow multiple lines of input. | 1.0 |
| **maxLength** | `number` | No | Hint of maximum length characters to collect (may be ignored by some clients). | 1.0 |
| **placeholder** | `string` | No | Description of the input desired. Displayed when no text has been input. | 1.0 |
| **style** | `TextInputStyle` | No |  | 1.0 |
| **inlineAction** | `Action` | No | The inline action for the input. Typically displayed to the right of the input. It is strongly recommended that an icon on the action (which will be displayed instead of the title of the action). | 1.0 |
| **value** | `string` | No | The initial value for this field. | 1.0 |
| **id** | `string` | Yes | Unique identifier for the value. Used to identify collected input when the Submit action is performed. | 1.0 |
| **spacing** | `Spacing` | No | Controls the amount of spacing between this element and the preceding element. | 1.0 |
| **separator** | `boolean` | No | When `true`, draw a separating line at the top of the element. | 1.0 |
<!-- END AUTO-GENERATED -->

## Rendering