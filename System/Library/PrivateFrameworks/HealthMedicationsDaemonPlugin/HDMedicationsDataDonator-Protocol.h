//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthMedicationsDaemonPlugin/NSObject-Protocol.h>

@protocol HDMedicationsDataDonator <NSObject>
- (void)donateWithOptions:(unsigned short)arg1 usingDataStream:(void (^)(id <HDMedicationsDataStream>, NSError *))arg2;
@end
