//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXFont : NSObject
{
}

+ (void)mapFontProperties:(id)arg1 toTextProps:(id)arg2 withEffects:(id)arg3;	// IMP=0x0080000000394ccb
+ (void)mapFontProperties:(id)arg1 to:(id)arg2;	// IMP=0x0080000000394929
+ (id)readParagraphPropertiesFromXmlTextPropertiesParentElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x008000000039477d
+ (id)defaultEdRunCollectionForTitle:(id)arg1 titleElement:(struct _xmlNode *)arg2 state:(id)arg3;	// IMP=0x0080000000394471
+ (id)defaultEdRunCollectionWithState:(id)arg1;	// IMP=0x0080000000394304
+ (id)edRunCollectionFromXmlTextPropertiesElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x0080000000205f97
+ (id)edFontWithOadCharacterProperties:(id)arg1 state:(id)arg2;	// IMP=0x0080000000206437
+ (id)edFontWithFullOadCharacterProperties:(id)arg1 state:(id)arg2;	// IMP=0x0080000000393e2a
+ (id)edFontWithOadTextBody:(id)arg1 state:(id)arg2;	// IMP=0x0080000000206310
+ (id)edFontFromXmlTextPropertiesElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x0080000000206221

@end

