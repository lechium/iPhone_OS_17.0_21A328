//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXPivotTable : NSObject
{
}

+ (id)edPivotTableFromXmlPivotTableElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x008000000023326f
+ (int)edPivotAreaTypeFrom:(id)arg1;	// IMP=0x00800000003b730b
+ (int)edPivotConditionalFormatScopeFrom:(id)arg1;	// IMP=0x00800000003b7264
+ (int)edPivotConditionalFormatTypeFrom:(id)arg1;	// IMP=0x00800000003b71a0
+ (int)edPivotDatFieldFormatFrom:(id)arg1;	// IMP=0x0080000000234dc0
+ (int)edPivotFieldAxisFrom:(id)arg1;	// IMP=0x00800000002347fc
+ (int)edPivotItemTypeFrom:(id)arg1;	// IMP=0x00800000002349a3
+ (void)readPageFieldsFrom:(struct _xmlNode *)arg1 toCollection:(id)arg2 state:(id)arg3;	// IMP=0x00800000003b6f33
+ (void)readPivotAreaReferencesFrom:(struct _xmlNode *)arg1 toCollection:(id)arg2 state:(id)arg3;	// IMP=0x00800000003b6c93
+ (void)readPivotAreasFrom:(struct _xmlNode *)arg1 toCollection:(id)arg2 state:(id)arg3;	// IMP=0x00800000003b6896
+ (void)readConditionalFormatsFrom:(struct _xmlNode *)arg1 toCollection:(id)arg2 state:(id)arg3;	// IMP=0x00800000003b6536
+ (void)readDataFieldsFrom:(struct _xmlNode *)arg1 toCollection:(id)arg2 state:(id)arg3;	// IMP=0x00800000003b61cc
+ (void)readFieldItemsFrom:(struct _xmlNode *)arg1 toCollection:(id)arg2 state:(id)arg3;	// IMP=0x00800000003b5e47
+ (void)readPivotFieldsFrom:(struct _xmlNode *)arg1 toCollection:(id)arg2 state:(id)arg3;	// IMP=0x00800000003b59ac
+ (void)readItemsFrom:(struct _xmlNode *)arg1 toCollection:(id)arg2 state:(id)arg3;	// IMP=0x00800000003b561c
+ (void)readFieldsFrom:(struct _xmlNode *)arg1 toCollection:(id)arg2 state:(id)arg3;	// IMP=0x00800000003b548f
+ (void)readLocationFrom:(struct _xmlNode *)arg1 toPivotTable:(id)arg2;	// IMP=0x0080000000234297
+ (void)readStyleInfoFrom:(struct _xmlNode *)arg1 toPivotTable:(id)arg2;	// IMP=0x0080000000234510

@end

