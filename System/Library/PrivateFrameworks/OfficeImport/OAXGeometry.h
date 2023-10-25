//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXGeometry : NSObject
{
}

+ (id)stringWritingShapeType:(int)arg1;	// IMP=0x00800000002f40ff
+ (void)write:(id)arg1 to:(id)arg2;	// IMP=0x00800000002f3961
+ (id)stringForShapeType:(int)arg1;	// IMP=0x00800000001dbead
+ (int)shapeTypeForString:(id)arg1;	// IMP=0x00800000001aae93
+ (id)readCustomGeometryFromXmlNode:(struct _xmlNode *)arg1 hasImplicitFormulas:(_Bool)arg2 drawingState:(id)arg3;	// IMP=0x00800000002f37c9
+ (id)readFromParentXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;	// IMP=0x00800000002f369a
+ (id)pathFillModeEnumMap;	// IMP=0x00800000001f7a7c
+ (id)formulaKeywordEnumMap;	// IMP=0x00800000001d3f22
+ (id)formulaTypeEnumMap;	// IMP=0x00800000001d3ef2
+ (id)shapeTypeEnumMap;	// IMP=0x00800000001aaf1f
+ (void)writeShapePathPoint:(struct OADAdjustPoint)arg1 origin:(CsPoint_c846a6ec)arg2 to:(id)arg3;	// IMP=0x00800000002f5d44
+ (void)writePath:(id)arg1 coordSpace:(CsRect_0aefebc6)arg2 to:(id)arg3;	// IMP=0x00800000002f58c6
+ (void)readPathsFromCustomGeometryXmlNode:(struct _xmlNode *)arg1 toCustomGeometry:(id)arg2 formulaNameToIndexMap:(id)arg3 drawingState:(id)arg4;	// IMP=0x00800000002f503d
+ (void)readTextRectFromCustomGeometryXmlNode:(struct _xmlNode *)arg1 toCustomGeometry:(id)arg2 formulaNameToIndexMap:(id)arg3 drawingState:(id)arg4;	// IMP=0x00800000002f4e9f
+ (struct OADAdjustCoord)readAdjustCoordFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2 formulaNameToIndexMap:(id)arg3;	// IMP=0x00800000001d3f63
+ (void)addFormulasFromFile:(id)arg1 toCustomGeometry:(id)arg2 formulaNameToIndexMap:(id)arg3 drawingState:(id)arg4;	// IMP=0x00800000002f4d29
+ (void)readFormulasFromCustomGeometryXmlNode:(struct _xmlNode *)arg1 toCustomGeometry:(id)arg2 adjustValueNameToIndexMap:(id)arg3 formulaNameToIndexMap:(id)arg4 drawingState:(id)arg5;	// IMP=0x00800000002f4579
+ (void)readAdjustValuesFromCustomGeometryXmlNode:(struct _xmlNode *)arg1 toCustomGeometry:(id)arg2 adjustValueNameToIndexMap:(id)arg3 drawingState:(id)arg4;	// IMP=0x00800000002f433c
+ (id)readPresetGeometryFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;	// IMP=0x00800000002f413c
+ (int)adjustValueWithGuideXmlNode:(struct _xmlNode *)arg1;	// IMP=0x00800000001db4c4

@end
