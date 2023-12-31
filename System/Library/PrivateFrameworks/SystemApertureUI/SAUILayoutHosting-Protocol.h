//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SystemApertureUI/NSObject-Protocol.h>

@protocol SAUILayoutSpecifying;

@protocol SAUILayoutHosting <NSObject>
- (struct NSDirectionalEdgeInsets)edgeOutsetsForSize:(struct CGSize)arg1;
- (void)menuPresentationRequestDidChangeForLayoutSpecifier:(id <SAUILayoutSpecifying>)arg1;
- (void)preferredEdgeOutsetsDidInvalidateForLayoutSpecifier:(id <SAUILayoutSpecifying>)arg1;
- (void)preferredLayoutModeDidInvalidateForLayoutSpecifier:(id <SAUILayoutSpecifying>)arg1;

@optional
- (void)preferredPromotionDidInvalidateForLayoutSpecifier:(id <SAUILayoutSpecifying>)arg1;
@end

