//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXChartType : NSObject
{
}

+ (void)resolveStyle:(id)arg1 state:(id)arg2;	// IMP=0x0080000000210b34
+ (int)chdShapeTypeFromXmlShapeTypeElement:(struct _xmlNode *)arg1;	// IMP=0x008000000021d564
+ (id)stringWithGroupingEnum:(int)arg1;	// IMP=0x00800000003925eb
+ (int)chdGroupingFromXmlGroupingElement:(struct _xmlNode *)arg1;	// IMP=0x008000000020b037
+ (id)chdChartTypeFromXmlChartTypeElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x008000000020a96f
+ (void)prepareChartTypeForWriting:(id)arg1;	// IMP=0x0080000000392d90
+ (Class)chxChartTypeClassWithXmlElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x008000000039260e

@end

