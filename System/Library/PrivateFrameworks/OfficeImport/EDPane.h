//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDReference;

__attribute__((visibility("hidden")))
@interface EDPane : NSObject
{
    double mXSplitPosition;	// 8 = 0x8
    double mYSplitPosition;	// 16 = 0x10
    EDReference *mTopLeftCell;	// 24 = 0x18
    int mActivePane;	// 32 = 0x20
    int mPaneState;	// 36 = 0x24
}

+ (id)pane;	// IMP=0x006000000014d47f
- (void).cxx_destruct;	// IMP=0x00000000003a44d4
- (id)description;	// IMP=0x00000000003a4496
- (void)setPaneState:(int)arg1;	// IMP=0x00000000003a448d
- (int)paneState;	// IMP=0x00000000003a4484
- (void)setActivePane:(int)arg1;	// IMP=0x000000000014d4db
- (int)activePane;	// IMP=0x00000000003a447b
- (void)setTopLeftCell:(id)arg1;	// IMP=0x000000000014d4fa
- (id)topLeftCell;	// IMP=0x00000000003a446d
- (void)setYSplitPosition:(double)arg1;	// IMP=0x000000000014d4ef
- (double)ySplitPosition;	// IMP=0x00000000003a4462
- (void)setXSplitPosition:(double)arg1;	// IMP=0x000000000014d4e4
- (double)xSplitPosition;	// IMP=0x00000000003a4457
- (id)init;	// IMP=0x000000000014d499

@end
