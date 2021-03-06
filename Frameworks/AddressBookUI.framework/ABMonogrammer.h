/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, UIColor, UIFont, UIImage;

@interface ABMonogrammer : NSObject
{
    UIImage *_silhouetteMonogram;
    UIImage *_questionMarkMonogram;
    UIImage *_knockoutMaskMonogram;
    double _innerBorderWidth;
    NSString *_silhouetteImageName;
    long long _monogrammerStyle;
    UIColor *_tintColor;
    _Bool _textKnockout;
    double _diameter;
    UIColor *_backgroundColor;
    UIFont *_font;
    UIColor *_textColor;
}

@property(nonatomic) _Bool textKnockout; // @synthesize textKnockout=_textKnockout;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double diameter; // @synthesize diameter=_diameter;
- (id)_copyMonogramWithKnockoutMask;
- (id)_copyMonogramWithSilhouette;
- (id)_copyMonogramWithInitials:(id)arg1;
- (id)_copyMonogramWithImageData:(struct __CFData *)arg1;
- (id)_initialsForFirstName:(id)arg1 lastName:(id)arg2;
- (id)_initialsForPerson:(void *)arg1;
- (void)_clearMonogramCache;
- (id)defaultMonogram;
- (id)maskForMonogram;
- (id)knockoutMaskMonogram;
- (id)questionMarkMonogram;
- (id)silhouetteMonogram;
- (id)monogramForPersonWithFirstName:(id)arg1 lastName:(id)arg2;
- (id)monogramForPerson:(void *)arg1;
- (id)monogramForPerson:(void *)arg1 isPersonImage:(_Bool *)arg2;
- (_Bool)hasMonogramForPerson:(void *)arg1;
- (_Bool)hasImageOrInitialsForPerson:(void *)arg1;
- (id)silhouetteImageName;
- (double)innerBorderWidth;
- (void)monogramsWithTint:(id)arg1;
- (void)monogramsAsFlatImages;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 diameter:(double)arg2;
- (id)init;

@end

