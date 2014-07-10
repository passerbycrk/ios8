/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MusicUI/MusicQueryPlaybackContext.h>

#import "MusicGeniusMixQueueFeederDataSource-Protocol.h"

@class MPMediaItem, MPMediaPlaylist, MPMediaQueryShuffledItems;

@interface MusicCloudGeniusMixPlaybackContext : MusicQueryPlaybackContext <MusicGeniusMixQueueFeederDataSource>
{
    MPMediaQueryShuffledItems *_items;
    MPMediaPlaylist *_mixPlaylist;
    MPMediaItem *_requiredInitialMediaItem;
}

+ (Class)queueFeederClass;
@property(retain, nonatomic) MPMediaItem *requiredInitialMediaItem; // @synthesize requiredInitialMediaItem=_requiredInitialMediaItem;
@property(readonly, nonatomic) MPMediaPlaylist *mixPlaylist; // @synthesize mixPlaylist=_mixPlaylist;
- (void).cxx_destruct;
- (unsigned long long)geniusMixQueueFeeder:(id)arg1 indexOfMediaItem:(id)arg2;
- (id)geniusMixQueueFeeder:(id)arg1 queryForMediaItemAtIndex:(unsigned long long)arg2;
- (id)geniusMixQueueFeeder:(id)arg1 mediaItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)geniusMixQueueFeederMediaItemCount:(id)arg1;
- (id)initWithGeniusMixPlaylist:(id)arg1 requiredInitialMediaItem:(id)arg2 error:(id *)arg3;

@end
