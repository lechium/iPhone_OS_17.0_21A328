//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AmbientUI/NSObject-Protocol.h>

@class NSString, PRSPosterConfiguration;
@protocol AMUIPosterSelectionCoordinating;

@protocol AMUIPosterSelectionCoordinatingDelegate <NSObject>
- (NSString *)posterSelectionCoordinatorRequestsConnectedChargerId:(id <AMUIPosterSelectionCoordinating>)arg1;
- (void)posterSelectionCoordinator:(id <AMUIPosterSelectionCoordinating>)arg1 didUpdateLastSelectedPosterConfiguration:(PRSPosterConfiguration *)arg2;
@end

