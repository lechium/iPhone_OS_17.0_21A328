//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXEffect : NSObject
{
}

+ (id)updateOutgoingEffects:(id)arg1;	// IMP=0x00800000002f155d
+ (id)updateIncomingEffects:(id)arg1;	// IMP=0x00800000002f1243
+ (void)writeGlow:(id)arg1 to:(id)arg2;	// IMP=0x00800000002f10ee
+ (void)readGlow:(id)arg1 fromXmlNode:(struct _xmlNode *)arg2;	// IMP=0x00800000002f0ffc
+ (void)writeReflection:(id)arg1 to:(id)arg2;	// IMP=0x00800000002f074b
+ (void)readReflection:(id)arg1 fromXmlNode:(struct _xmlNode *)arg2;	// IMP=0x00800000002f038a
+ (void)writePresetShadow:(id)arg1 to:(id)arg2;	// IMP=0x00800000002f027f
+ (void)readPresetShadow:(id)arg1 fromXmlNode:(struct _xmlNode *)arg2;	// IMP=0x00800000002f017c
+ (void)writeOuterShadow:(id)arg1 includeRotateWithShape:(_Bool)arg2 to:(id)arg3;	// IMP=0x00800000002efdd6
+ (void)readOuterShadow:(id)arg1 fromXmlNode:(struct _xmlNode *)arg2;	// IMP=0x00800000002efc06
+ (void)readShadow:(id)arg1 fromXmlNode:(struct _xmlNode *)arg2;	// IMP=0x00800000002efa99
+ (_Bool)isEmpty:(id)arg1;	// IMP=0x00800000002ef88a
+ (id)readEffectsFromXmlNode:(struct _xmlNode *)arg1 packagePart:(id)arg2 drawingState:(id)arg3;	// IMP=0x00800000000272f5
+ (id)presetShadowTypeEnumMap;	// IMP=0x0080000000219d33
+ (void)writeShadowBase:(id)arg1 to:(id)arg2;	// IMP=0x00800000002f1873

@end
