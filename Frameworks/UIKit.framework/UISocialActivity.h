/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIActivity.h>

@class NSExtension, NSString, SLComposeViewController, UIImage, _UIActivityBundleHelper;

@interface UISocialActivity : UIActivity
{
    NSString *_builtinActivityType;
    NSExtension *_applicationExtension;
    _UIActivityBundleHelper *_activityBundleHelper;
    SLComposeViewController *_socialComposeViewController;
    NSString *_localizedExtensionBundleName;
    UIImage *_renderedActivityImage;
    UIImage *_renderedActivitySettingsImage;
}

+ (id)availableCustomSocialActivities;
+ (long long)activityCategory;
@property(retain, nonatomic) UIImage *renderedActivitySettingsImage; // @synthesize renderedActivitySettingsImage=_renderedActivitySettingsImage;
@property(retain, nonatomic) UIImage *renderedActivityImage; // @synthesize renderedActivityImage=_renderedActivityImage;
@property(copy, nonatomic) NSString *localizedExtensionBundleName; // @synthesize localizedExtensionBundleName=_localizedExtensionBundleName;
@property(retain, nonatomic) SLComposeViewController *socialComposeViewController; // @synthesize socialComposeViewController=_socialComposeViewController;
@property(retain, nonatomic) _UIActivityBundleHelper *activityBundleHelper; // @synthesize activityBundleHelper=_activityBundleHelper;
@property(retain, nonatomic) NSExtension *applicationExtension; // @synthesize applicationExtension=_applicationExtension;
@property(copy, nonatomic) NSString *builtinActivityType; // @synthesize builtinActivityType=_builtinActivityType;
- (void)_cleanup;
- (struct CGSize)_thumbnailSize;
- (id)activityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (long long)_blockingActivityItemTypes;
- (long long)_activityItemTypes;
- (id)_activitySettingsImage;
- (id)_activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithApplicationExtension:(id)arg1;
- (id)initWithActivityType:(id)arg1;

@end

