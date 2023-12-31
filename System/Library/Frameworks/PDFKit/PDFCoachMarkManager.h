//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PDFCoachMarkManagerPrivate;

__attribute__((visibility("hidden")))
@interface PDFCoachMarkManager : NSObject
{
    PDFCoachMarkManagerPrivate *_private;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000068893
- (id)_pageLayerForPage:(id)arg1;	// IMP=0x0000000000068797
- (void)_cleanCoachMarks;	// IMP=0x0000000000068585
- (void)pageLayerWillRemove:(id)arg1;	// IMP=0x00000000000684c7
- (void)pageLayerDidAppear:(id)arg1;	// IMP=0x00000000000682e3
- (void)createCoachMarkForPage:(id)arg1 atFrame:(struct CGRect)arg2;	// IMP=0x0000000000068119
- (id)initWithPDFRenderingProperties:(id)arg1;	// IMP=0x0000000000068036

@end

