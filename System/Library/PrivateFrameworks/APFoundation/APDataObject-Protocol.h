//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <APFoundation/NSObject-Protocol.h>

@class NSString;

@protocol APDataObject <NSObject>
- (long long)typeForColumnName:(NSString *)arg1;
- (id)valueForColumnName:(NSString *)arg1;
- (void)setValue:(id)arg1 forColumnName:(NSString *)arg2;
@end

