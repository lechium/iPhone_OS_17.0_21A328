//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIWindowScene.h>

@protocol SBUISystemApertureElementProviding;

@interface UIWindowScene (SBUISystemAperture)
@property(nonatomic) __weak id <SBUISystemApertureElementProviding> systemApertureElementViewControllerProvider;
- (id)systemApertureElementSource;	// IMP=0x0030000000078cf2
- (id)systemApertureHostedElementContext;	// IMP=0x0030000000078cb6
- (id)systemApertureElementContextPrivate;	// IMP=0x0030000000078ca4
- (id)systemApertureElementContext;	// IMP=0x0030000000078c41
@property(readonly, nonatomic, getter=SBUI_isHostedBySystemAperture) _Bool SBUI_hostedBySystemAperture;
@end

