/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MusicUI/MusicTableViewCell.h>

@interface MusicDownloadAllTableViewCell : MusicTableViewCell
{
    _Bool _downloadAllCellForArtist;
}

+ (Class)contentViewClass;
@property(nonatomic, getter=isDownloadAllCellForArtist) _Bool downloadAllCellForArtist; // @synthesize downloadAllCellForArtist=_downloadAllCellForArtist;
- (id)_downloadAllCellContentView;
@property(nonatomic) long long downloadableSongCount;
- (void)setSectionLocation:(int)arg1 animated:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
