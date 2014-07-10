/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKTileSource.h>

@class GEOActiveTileSet, VKTilePool, VKTimer, _VKTileSetBackedTileSourceTimerTarget;

// Not exported
@interface VKTileSetBackedTileSource : VKTileSource
{
    GEOActiveTileSet *_tileSet;
    struct _GEOTileKey _downloadTemplate;
    unsigned int _minimumDownloadZoomLevel;
    unsigned int _maximumDownloadZoomLevel;
    VKTimer *_expirationTimer;
    VKTilePool *_expiredTilePool;
    struct _NSRange _zoomLevelRange;
    _VKTileSetBackedTileSourceTimerTarget *_timerTarget;
}

@property(retain, nonatomic) GEOActiveTileSet *tileSet; // @synthesize tileSet=_tileSet;
- (id).cxx_construct;
- (long long)maximumZoomLevel;
- (long long)minimumZoomLevel;
- (long long)defaultMaximumZoomLevel;
- (long long)defaultMinimumZoomLevel;
- (unsigned long long)mapLayerForZoomLevelRange;
- (void)setStyleManager:(id)arg1;
- (void)populateVisibleTileSets:(id)arg1 withTiles:(id)arg2;
- (void)_expireTiles;
- (void)_scheduleTileExpirationTimer:(double)arg1 forceUpdate:(_Bool)arg2;
- (void)fetchedTile:(id)arg1 forKey:(const struct VKTileKey *)arg2;
- (id)tileForKey:(const struct VKTileKey *)arg1;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;
- (struct VKTileKey)sourceKeyForRenderKey:(const struct VKTileKey *)arg1;
- (struct _GEOTileKey)downloadKeyAtX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;
- (unsigned int)maximumDownloadZoomLevel;
- (unsigned int)minimumDownloadZoomLevel;
- (long long)tileSize;
- (double)_nextTileExpirationDate;
- (double)_expirationInterval;
- (_Bool)expires;
- (void)setClient:(id)arg1;
- (void)clearCaches;
- (id)tileLoader;
- (void)dealloc;
- (id)initWithTileSet:(id)arg1 tileGroupIdentifier:(unsigned int)arg2 locale:(id)arg3;

@end
