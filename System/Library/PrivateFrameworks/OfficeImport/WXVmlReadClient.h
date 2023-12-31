//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WXVmlReadClient : NSObject
{
}

+ (int)vmlSupportLevel;	// IMP=0x00100000004154e7
+ (void)readClientDataFromGroup:(struct _xmlNode *)arg1 toGroup:(id)arg2 state:(id)arg3;	// IMP=0x00100000004153c1
+ (void)readClientDataFromShape:(struct _xmlNode *)arg1 toGraphic:(id)arg2 state:(id)arg3;	// IMP=0x0010000000414d19
+ (void)readFromDrawable:(struct _xmlNode *)arg1 toContent:(id)arg2;	// IMP=0x00100000004147c4
+ (int)zIndex:(id)arg1;	// IMP=0x00100000004147af
+ (_Bool)floating:(id)arg1;	// IMP=0x0010000000414793
+ (double)wrapDistanceBottom:(id)arg1;	// IMP=0x0010000000414736
+ (double)wrapDistanceRight:(id)arg1;	// IMP=0x00100000004146d4
+ (double)wrapDistanceTop:(id)arg1;	// IMP=0x0010000000414677
+ (double)wrapDistanceLeft:(id)arg1;	// IMP=0x0010000000414615
+ (int)relativeVerticalPosition:(id)arg1;	// IMP=0x00100000004145b6
+ (int)verticalPosition:(id)arg1;	// IMP=0x001000000041455a
+ (int)relativeHorizontalPosition:(id)arg1;	// IMP=0x00100000004144fb
+ (int)horizontalPosition:(id)arg1;	// IMP=0x001000000041449f
+ (void)copyFromDrawable:(id)arg1 toContent:(id)arg2;	// IMP=0x0010000000414383
+ (void)initialize;	// IMP=0x0010000000414023
+ (void)readTextWrappingFromParent:(struct _xmlNode *)arg1 toAnchor:(id)arg2;	// IMP=0x00100000004154f2

@end

