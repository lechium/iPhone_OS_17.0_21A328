//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WXText : NSObject
{
}

+ (void)readFromString:(id)arg1 to:(id)arg2;	// IMP=0x0080000000413857
+ (void)readFromStream:(struct _xmlTextReader *)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4;	// IMP=0x00800000001a421a
+ (void)readFrom:(struct _xmlNode *)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4;	// IMP=0x00800000001a3a37
+ (void)readFromStream:(struct _xmlTextReader *)arg1 state:(id)arg2;	// IMP=0x00800000001a4102
+ (void)readFrom:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x008000000041373f
+ (void)readFromTable:(struct _xmlNode *)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4;	// IMP=0x00800000001af648
+ (void)readFromParagraph:(struct _xmlNode *)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4;	// IMP=0x00800000001a4d3b
+ (void)updateTextBoxIdsFromState:(id)arg1;	// IMP=0x00800000001b82ac
+ (id)addNewSectionTo:(id)arg1 state:(id)arg2;	// IMP=0x00800000001af269
+ (void)createChildrenFromStream:(struct _xmlTextReader *)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4;	// IMP=0x00800000001a4233
+ (void)createChildren:(struct _xmlNode *)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4;	// IMP=0x00800000001a3a50

@end

