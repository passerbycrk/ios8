/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class FigCaptureSourceFormat, NSDictionary, NSString;

@interface FigCaptureSourceConfiguration : NSObject <NSCoding, NSCopying>
{
    NSString *_sourceID;
    struct OpaqueFigCaptureSource *_source;
    int _sourceType;
    NSDictionary *_sourceAttributes;
    FigCaptureSourceFormat *_requiredFormat;
    float _requiredMaxFrameRate;
    float _requiredMinFrameRate;
    float _videoZoomFactor;
    float _videoZoomRampAcceleration;
    int _imageControlMode;
    _Bool _automaticallyEnablesLowLightBoostWhenAvailable;
}

+ (int)sourceTypeForString:(id)arg1;
+ (id)stringForSourceType:(int)arg1;
+ (void)initialize;
@property(nonatomic) _Bool automaticallyEnablesLowLightBoostWhenAvailable; // @synthesize automaticallyEnablesLowLightBoostWhenAvailable=_automaticallyEnablesLowLightBoostWhenAvailable;
@property(nonatomic) int imageControlMode; // @synthesize imageControlMode=_imageControlMode;
@property(nonatomic) float videoZoomRampAcceleration; // @synthesize videoZoomRampAcceleration=_videoZoomRampAcceleration;
@property(nonatomic) float videoZoomFactor; // @synthesize videoZoomFactor=_videoZoomFactor;
@property(nonatomic) float requiredMinFrameRate; // @synthesize requiredMinFrameRate=_requiredMinFrameRate;
@property(nonatomic) float requiredMaxFrameRate; // @synthesize requiredMaxFrameRate=_requiredMaxFrameRate;
@property(retain, nonatomic) FigCaptureSourceFormat *requiredFormat; // @synthesize requiredFormat=_requiredFormat;
@property(copy, nonatomic) NSString *sourceID; // @synthesize sourceID=_sourceID;
- (id)_sourceUID;
- (int)_sourceToken;
- (_Bool)_isCameraSource;
- (id)_sourceAttributes;
@property(readonly, nonatomic) struct OpaqueFigCaptureSource *source;
@property(readonly, nonatomic) int sourceType;
@property(readonly, nonatomic) int sourcePosition;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceType:(int)arg1;
- (id)initWithSource:(struct OpaqueFigCaptureSource *)arg1;

@end

