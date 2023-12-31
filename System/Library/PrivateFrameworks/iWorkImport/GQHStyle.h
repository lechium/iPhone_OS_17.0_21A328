//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GQHStyle : NSObject
{
    struct __CFDictionary *mStyles;	// 8 = 0x8
    struct __CFString *mCssClassAttribute;	// 16 = 0x10
    struct __CFString *mCachedCssStyleName;	// 24 = 0x18
}

+ (void)createBaseStyleClassesString:(struct __CFArray *)arg1 classString:(struct __CFString **)arg2 classTypes:(struct __CFArray *)arg3 state:(id)arg4;	// IMP=0x006000000003296a
+ (void)createBaseStyleClassString:(id)arg1 classString:(struct __CFString **)arg2 classType:(Class)arg3 state:(id)arg4;	// IMP=0x00600000000328d0
+ (void)appendParentClass:(struct __CFString **)arg1 style:(id)arg2 classType:(Class)arg3 state:(id)arg4;	// IMP=0x0060000000032726
+ (void)setSingleStyleAttribute:(struct __CFString *)arg1 pxValue:(int)arg2 node:(id)arg3;	// IMP=0x006000000003262c
+ (void)setSingleStyleAttribute:(struct __CFString *)arg1 intValue:(int)arg2 node:(id)arg3;	// IMP=0x00600000000325d2
+ (void)setSingleStyleAttribute:(struct __CFString *)arg1 value:(struct __CFString *)arg2 node:(id)arg3;	// IMP=0x006000000003256f
- (void)setStyleOnCurrentNode:(id)arg1 mappingBaseStyleClasses:(struct __CFArray *)arg2 baseClassTypes:(struct __CFArray *)arg3;	// IMP=0x0000000000032a11
- (void)setStyleOnCurrentNode:(id)arg1 mappingBaseStyleClass:(id)arg2 baseClassType:(Class)arg3;	// IMP=0x0000000000032686
- (void)addClass:(struct __CFString *)arg1;	// IMP=0x0000000000032544
- (void)setStyleOnCurrentNode:(id)arg1;	// IMP=0x00000000000324ef
- (void)setupCssClassAttribute:(id)arg1;	// IMP=0x0000000000032418
- (struct __CFString *)createNamedStyle:(struct __CFString *)arg1;	// IMP=0x000000000003233a
- (_Bool)getAttribute:(struct __CFString *)arg1 trblValue:(id *)arg2;	// IMP=0x0000000000032217
- (_Bool)getAttribute:(struct __CFString *)arg1 value:(const struct __CFString **)arg2;	// IMP=0x00000000000321d0
- (_Bool)getAttribute:(struct __CFString *)arg1 intValue:(int *)arg2;	// IMP=0x000000000003217a
- (void)addAttribute:(struct __CFString *)arg1 trblValue:(id)arg2;	// IMP=0x0000000000032166
- (void)addAttribute:(struct __CFString *)arg1 ptValue:(int)arg2;	// IMP=0x000000000003210d
- (void)addAttribute:(struct __CFString *)arg1 pxValue:(int)arg2;	// IMP=0x00000000000320b4
- (void)addAttribute:(struct __CFString *)arg1 intValue:(int)arg2;	// IMP=0x000000000003205e
- (void)addAttribute:(struct __CFString *)arg1 value:(struct __CFString *)arg2;	// IMP=0x000000000003204a
- (void)dealloc;	// IMP=0x0000000000031ff9
- (id)init;	// IMP=0x0000000000031f8d

@end

