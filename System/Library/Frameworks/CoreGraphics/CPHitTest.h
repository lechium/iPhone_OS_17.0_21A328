//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPPage, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPHitTest : NSObject
{
    CPPage *page;	// 8 = 0x8
    NSMutableArray *objectsOnPage;	// 16 = 0x10
    float mapTemp;	// 24 = 0x18
}

- (long long)compareByReadingOrder:(struct CGPoint)arg1 to:(struct CGPoint)arg2;	// IMP=0x000000000028272a
- (id)objectAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000282701
- (id)textLine:(struct CGPoint)arg1;	// IMP=0x00000000002825ae
- (id)column:(struct CGPoint)arg1;	// IMP=0x000000000028256f
- (unsigned int)columnsAt:(struct CGPoint)arg1;	// IMP=0x0000000000282542
- (id)layoutArea:(struct CGPoint)arg1;	// IMP=0x00000000002824f2
- (id)paragraphNear:(struct CGPoint)arg1;	// IMP=0x0000000000282310
- (id)paragraph:(struct CGPoint)arg1;	// IMP=0x00000000002821a7
- (id)page;	// IMP=0x000000000028219d
- (void)dealloc;	// IMP=0x0000000000282151
- (id)initWithPage:(id)arg1;	// IMP=0x00000000002820f8
- (id)findObjectIn:(id)arg1 at:(struct CGPoint)arg2 count:(int *)arg3;	// IMP=0x000000000028314e
- (id)findBestMatch:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x0000000000283020
- (_Bool)hitTestParagraph:(id)arg1 point:(struct CGPoint)arg2;	// IMP=0x0000000000282edb
- (_Bool)hitTestGraphicObject:(id)arg1 point:(struct CGPoint)arg2;	// IMP=0x0000000000282dc4
- (void)findClickableObjects:(_Bool)arg1;	// IMP=0x0000000000282b01

@end

