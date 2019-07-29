```json
{
    "table_name": "`task`",
    "columns": [
        {
            "name": "`id`",
            "type": "bigint",
            "attrs": [
                "notnull",
                "auto_increment"
            ]
        },
        {
            "name": "`uid`",
            "type": "bigint",
            "attrs": [
                "notnull",
                "comment'user id'"
            ]
        },
        {
            "name": "`updated_at`",
            "type": "int",
            "attrs": [
                "defaultnull"
            ]
        }
    ],
    "constrains": [
        {
            "name": "",
            "type": "primary",
            "columns": [
                "`id`"
            ]
        },
        {
            "name": "`uid`",
            "type": "key",
            "columns": [
                "`uid`",
                "`task_id`"
            ]
        }
    ],
    "options": {
        "DEFAULT_CHARSET": "utf8mb4",
        "comment": "'shard_key=\"uid\"'",
        "engine": "innodb"
    }
}
```
