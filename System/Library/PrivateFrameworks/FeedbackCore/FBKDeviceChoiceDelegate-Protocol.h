//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FeedbackCore/NSObject-Protocol.h>

@class FBKDeviceChoicesViewController, NSSet;

@protocol FBKDeviceChoiceDelegate <NSObject>
- (void)deviceChoicesControllerDidCancelWithController:(FBKDeviceChoicesViewController *)arg1;
- (void)deviceChoicesController:(FBKDeviceChoicesViewController *)arg1 didChooseDevices:(NSSet *)arg2;
@end

