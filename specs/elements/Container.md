<!-- AUTO-GENERATED: This section is auto-generated from schemas/adaptive-card.json. Do NOT add anything above this or edit anything inside, it MUST be the first thing in the document and will be overwritten. -->

# Container

| Property | Type | Required | Description | Version |
| -------- | ---- | -------- | ----------- | ------- |
| **type** | `"Container"` |  No | Must be `Container` | 1.0 |
| **items** | `array[]` | Yes | The card elements to render inside the `Container`. | 1.0 |
| **selectAction** | `any` |  No | An Action that will be invoked when the `Container` is tapped or selected. `Action.ShowCard` is not supported. | 1.1 |
| **style** | `null` |  No | Style hint for `Container`. | 1.0 |
| **verticalContentAlignment** | `any` |  No, default: `top` | Defines how the content should be aligned vertically within the container. | 1.1 |
| **bleed** | `boolean` |  No | Determines whether the element should bleed through its parent's padding. | 1.2 |
| **backgroundImage** | `object` |  No | Specifies the background image. | 1.2 |
| **id** | `any` |  No | &nbsp; | 1.0 |
| **spacing** | `any` |  No | &nbsp; | 1.0 |
| **separator** | `any` |  No | &nbsp; | 1.0 |
<!-- END AUTO-GENERATED -->

## Rendering

1. Determine the padding...
	1. If 