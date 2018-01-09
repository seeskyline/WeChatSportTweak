//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface TcpPingConf : NSObject <NSCoding>
{
    NSString *_host;
    unsigned long long _port;
    NSString *_request;
    unsigned long long _channel;
    NSString *_compareString;
    unsigned long long _timeout;
    unsigned long long _count;
}

@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) unsigned long long timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSString *compareString; // @synthesize compareString=_compareString;
@property(nonatomic) unsigned long long channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSString *request; // @synthesize request=_request;
@property(nonatomic) unsigned long long port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

