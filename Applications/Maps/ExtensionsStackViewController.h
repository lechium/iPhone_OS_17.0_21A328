//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UIScrollView, UIStackView, UIView;

@interface ExtensionsStackViewController
{
    UIView *_headerView;	// 8 = 0x8
    UIStackView *_stackView;	// 16 = 0x10
    UIScrollView *_scrollView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000bf460b
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
- (void)_updateScrollViewForLayout:(unsigned long long)arg1;	// IMP=0x0010000000bf4557
- (void)didChangeLayout:(unsigned long long)arg1;	// IMP=0x0010000000bf450c
- (id)headerView;	// IMP=0x0010000000bf44f7
@property(readonly, copy, nonatomic) NSArray *stackedViews;
- (void)viewDidLoad;	// IMP=0x0010000000bf3b56

@end

