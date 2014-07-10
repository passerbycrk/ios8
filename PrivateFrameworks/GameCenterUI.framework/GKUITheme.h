/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GKGameListIconBrush, GKNetworkImageSource, NSCache, UIImage;

@interface GKUITheme : NSObject
{
    NSCache *_resourceCache;
}

+ (id)sharedTheme;
@property(retain, nonatomic) NSCache *resourceCache; // @synthesize resourceCache=_resourceCache;
- (id)statusDotImage;
- (id)navbarActionButtonIcon;
- (id)bubbleHighlight;
- (id)bubbleTurns;
- (id)bubbleSignin;
- (id)bubbleShare;
- (id)bubbleRequests;
- (id)bubblePoints;
- (id)bubblePlay;
- (id)bubbleInvite;
- (id)bubbleGames;
- (id)bubbleFriends;
- (id)bubbleDecline;
- (id)bubbleChallenges;
- (id)bubbleAccept;
- (id)playerPickerSelectedImage;
- (id)playerPickerUnselectedImage;
- (id)removePlayerButtonImage;
- (id)addPlayerButtonImage;
- (id)defaultPlayerPhoto;
- (id)defaultLeaderboardIcon;
@property(readonly, retain, nonatomic) GKNetworkImageSource *iconLeaderboardSetListSource;
@property(readonly, retain, nonatomic) GKNetworkImageSource *iconLeaderboardListSource;
@property(readonly, retain, nonatomic) GKNetworkImageSource *photoDetailSource;
@property(readonly, retain, nonatomic) GKNetworkImageSource *photoListSource;
@property(readonly, nonatomic) GKNetworkImageSource *untreatedAchievementImageSource;
@property(readonly, retain, nonatomic) GKNetworkImageSource *gameListIconSource;
@property(readonly, retain, nonatomic) GKNetworkImageSource *macGameIconSource;
- (id)resourceWithName:(id)arg1 missingHandler:(id)arg2;
- (id)resourceForSelector:(SEL)arg1 missingHandler:(id)arg2;
@property(readonly, retain, nonatomic) GKGameListIconBrush *gameListIconBrush;
@property(readonly, nonatomic) double formSheetCornerRadius;
@property(readonly, nonatomic) struct CGSize formSheetSize;
- (id)tabbarIconTurnsSelected:(_Bool)arg1;
- (id)tabbarIconChallengesSelected:(_Bool)arg1;
- (id)tabbarIconMeSelected:(_Bool)arg1;
- (id)tabbarIconGamesSelected:(_Bool)arg1;
- (id)tabbarIconFriendsSelected:(_Bool)arg1;
- (id)_tabBarIconImageNamed:(id)arg1 selectedName:(id)arg2 selected:(_Bool)arg3;
- (id)achievementsDefaultIcon;
- (id)achievementsNotStartedIcon;
- (id)eventIconImage;
@property(readonly, retain, nonatomic) UIImage *interactiveRatingStarsBackground;
@property(readonly, retain, nonatomic) UIImage *interactiveRatingStarsForeground;
@property(readonly, retain, nonatomic) UIImage *ratingStarsForegroundImage;
@property(readonly, retain, nonatomic) UIImage *ratingStarsBackgroundImage;
- (id)imageNamed:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)clearResourceCache;

@end
