//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, SKUIViewReusePool;

__attribute__((visibility("hidden")))
@interface SKUIViewReuseView : UIView
{
    SKUIViewReusePool *_viewReusePool;	// 8 = 0x8
    NSArray *_allExistingViews;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005fe99
@property(readonly, nonatomic) NSArray *allExistingViews; // @synthesize allExistingViews=_allExistingViews;
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000000005fc29
- (void)registerClass:(Class)arg1 forViewWithReuseIdentifier:(id)arg2;	// IMP=0x000000000005fc0c
- (void)modifyUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000005f98b
- (void)enumerateExistingViewsForReuseIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000005f79c
- (void)dealloc;	// IMP=0x000000000005f5fc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000005f52f

@end

