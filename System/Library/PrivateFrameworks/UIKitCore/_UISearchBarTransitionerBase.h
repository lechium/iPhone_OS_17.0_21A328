//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIView, _UISearchBarLayout, _UISearchBarTransitionContext;

__attribute__((visibility("hidden")))
@interface _UISearchBarTransitionerBase : NSObject
{
    _UISearchBarLayout *_activeLayout;	// 8 = 0x8
    UIView *_searchBar;	// 16 = 0x10
    _UISearchBarTransitionContext *_transitionContext;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002b3ac7
@property(retain, nonatomic) _UISearchBarTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
@property(readonly, nonatomic) __weak UIView *searchBar; // @synthesize searchBar=_searchBar;
@property(readonly, nonatomic) _UISearchBarLayout *activeLayout; // @synthesize activeLayout=_activeLayout;
- (void)cancel;	// IMP=0x00000000002b3a56
- (void)complete;	// IMP=0x00000000002b3a50
- (void)animate;	// IMP=0x00000000002b3a1a
- (void)prepare;	// IMP=0x00000000002b39e4
- (id)initWithNewTransitionContextForSearchBar:(id)arg1;	// IMP=0x00000000002b3980
- (id)init;	// IMP=0x00000000002b387e
- (id)initWithTransitionContext:(id)arg1 forSearchBar:(id)arg2;	// IMP=0x00000000002b36fa

@end

