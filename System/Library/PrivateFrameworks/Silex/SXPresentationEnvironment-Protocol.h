//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@class UITraitCollection;

@protocol SXPresentationEnvironment <NSObject>
@property(readonly, nonatomic) _Bool smartInvertColorsEnabled;
@property(readonly, nonatomic) unsigned long long viewingLocation;
@property(readonly, nonatomic) UITraitCollection *presentationTraitCollection;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsets;
@property(readonly, nonatomic) struct CGSize viewportSize;
@end

