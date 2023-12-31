//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SAElement-Protocol.h>
#import <SpringBoard/SAUILayoutObservable-Protocol.h>
#import <SpringBoard/SAUILayoutSpecifying-Protocol.h>
#import <SpringBoard/SBSystemApertureSuppressible-Protocol.h>

@protocol BNPresentable;

@protocol SBPresentableElement <SAElement, SBSystemApertureSuppressible, SAUILayoutSpecifying, SAUILayoutObservable>
@property(readonly, nonatomic) id <BNPresentable> presentable;
@end

