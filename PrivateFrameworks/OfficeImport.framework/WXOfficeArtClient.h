/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OAXClient.h>

// Not exported
@interface WXOfficeArtClient : OAXClient
{
}

- (void)readBlipExtWithURI:(id)arg1 fromNode:(struct _xmlNode *)arg2 toDrawable:(id)arg3 state:(id)arg4;
- (id)readGraphicData:(struct _xmlNode *)arg1 state:(id)arg2;
- (void)readClientDataFromNode:(struct _xmlNode *)arg1 toDrawable:(id)arg2 state:(id)arg3;
- (struct _xmlNode *)genericNonVisualPropertiesNodeForDrawableNode:(struct _xmlNode *)arg1 inNamespace:(id)arg2 state:(id)arg3;
- (id)readClientDrawableFromXmlNode:(struct _xmlNode *)arg1 state:(id)arg2;

@end

