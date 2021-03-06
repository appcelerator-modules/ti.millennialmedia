/**
 * Ti.MillennialMedia Module
 * Copyright (c) 2010-2013 by Appcelerator, Inc. All Rights Reserved.
 * Please see the LICENSE included with this distribution for details.
 */

#import "TiModule.h"
#import "TiApp.h"
#import "MMAdView.h"

typedef enum {
    TiMMBanner = 0,
    TiMMInterstitial
} TiMMType;

@interface TiMillennialmediaModule : TiModule <TiProxyDelegate>
{
@private
    CLLocation *geolocation_;
    NSDictionary *demographics_;
    NSMutableArray *keywords_;
    NSDictionary *customParameters_;
}

+(TiMillennialmediaModule *)sharedInstance;

-(MMRequest *)request;

@end
