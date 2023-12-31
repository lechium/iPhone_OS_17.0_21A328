//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXStatusController, UIContentUnavailableConfiguration;
@protocol PXPresentationEnvironment;

@protocol PXStatusControllerDelegate <NSObject>
- (id <PXPresentationEnvironment>)presentationEnvironmentForStatusController:(PXStatusController *)arg1;
- (void)statusController:(PXStatusController *)arg1 configurationDidChange:(UIContentUnavailableConfiguration *)arg2;
@end

