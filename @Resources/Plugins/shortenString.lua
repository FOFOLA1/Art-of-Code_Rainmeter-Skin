function Initialize()
    MeasureTitle = SKIN:GetMeasure('MeasureTitle')
    MeasureArtist = SKIN:GetMeasure('MeasureArtist')
end

function Update()
    local title = MeasureTitle:GetStringValue()
    local artist = MeasureArtist:GetStringValue()

    if string.len(title) > 28 then
        title = title:sub(1, 25) .. "..."
    end
    if string.len(artist) > 28 then
        artist = artist:sub(1, 25) .. "..."
    end
    SKIN:Bang('!SetVariable', 'TruncatedTitle', title)
    SKIN:Bang('!SetVariable', 'TruncatedArtist', artist)
end