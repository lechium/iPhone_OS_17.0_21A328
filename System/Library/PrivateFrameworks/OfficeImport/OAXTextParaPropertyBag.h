//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXTextParaPropertyBag : NSObject
{
}

+ (void)readParagraphProperties:(struct _xmlNode *)arg1 paragraphProperties:(id)arg2 drawingState:(id)arg3;	// IMP=0x0080000000196b34
+ (int)readBulletScheme:(id)arg1;	// IMP=0x00800000001d95b6
+ (void)readFontAlign:(id)arg1 paragraphProperties:(id)arg2;	// IMP=0x00800000001d9263
+ (void)readAlign:(id)arg1 paragraphProperties:(id)arg2;	// IMP=0x00800000001978f2
+ (void)readTabList:(struct _xmlNode *)arg1 paragraphProperties:(id)arg2 drawingState:(id)arg3;	// IMP=0x00800000002fae30
+ (id)readSpacing:(struct _xmlNode *)arg1 drawingState:(id)arg2;	// IMP=0x00800000002fac62

@end

