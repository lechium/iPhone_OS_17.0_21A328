//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIAlertController.h>

@protocol SSSWaitingForImageIdentifierUpdatesAlertControllerDelegate;

@interface SSSWaitingForImageIdentifierUpdatesAlertController : UIAlertController
{
    id <SSSWaitingForImageIdentifierUpdatesAlertControllerDelegate> _delegate;	// 8 = 0x8
    double _progress;	// 16 = 0x10
}

+ (id)newWaitingForImageIdentifierUpdatesAlertController;	// IMP=0x004000000003553e
- (void).cxx_destruct;	// IMP=0x0020000000035802
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) __weak id <SSSWaitingForImageIdentifierUpdatesAlertControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000000357bb
- (_Bool)canBecomeFirstResponder;	// IMP=0x00100000000357b3
- (id)_waitingContentViewController;	// IMP=0x0010000000035752

@end

