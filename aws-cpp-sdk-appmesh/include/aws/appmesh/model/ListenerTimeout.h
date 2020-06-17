﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/GrpcTimeout.h>
#include <aws/appmesh/model/HttpTimeout.h>
#include <aws/appmesh/model/TcpTimeout.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppMesh
{
namespace Model
{

  class AWS_APPMESH_API ListenerTimeout
  {
  public:
    ListenerTimeout();
    ListenerTimeout(Aws::Utils::Json::JsonView jsonValue);
    ListenerTimeout& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const GrpcTimeout& GetGrpc() const{ return m_grpc; }

    
    inline bool GrpcHasBeenSet() const { return m_grpcHasBeenSet; }

    
    inline void SetGrpc(const GrpcTimeout& value) { m_grpcHasBeenSet = true; m_grpc = value; }

    
    inline void SetGrpc(GrpcTimeout&& value) { m_grpcHasBeenSet = true; m_grpc = std::move(value); }

    
    inline ListenerTimeout& WithGrpc(const GrpcTimeout& value) { SetGrpc(value); return *this;}

    
    inline ListenerTimeout& WithGrpc(GrpcTimeout&& value) { SetGrpc(std::move(value)); return *this;}


    
    inline const HttpTimeout& GetHttp() const{ return m_http; }

    
    inline bool HttpHasBeenSet() const { return m_httpHasBeenSet; }

    
    inline void SetHttp(const HttpTimeout& value) { m_httpHasBeenSet = true; m_http = value; }

    
    inline void SetHttp(HttpTimeout&& value) { m_httpHasBeenSet = true; m_http = std::move(value); }

    
    inline ListenerTimeout& WithHttp(const HttpTimeout& value) { SetHttp(value); return *this;}

    
    inline ListenerTimeout& WithHttp(HttpTimeout&& value) { SetHttp(std::move(value)); return *this;}


    
    inline const HttpTimeout& GetHttp2() const{ return m_http2; }

    
    inline bool Http2HasBeenSet() const { return m_http2HasBeenSet; }

    
    inline void SetHttp2(const HttpTimeout& value) { m_http2HasBeenSet = true; m_http2 = value; }

    
    inline void SetHttp2(HttpTimeout&& value) { m_http2HasBeenSet = true; m_http2 = std::move(value); }

    
    inline ListenerTimeout& WithHttp2(const HttpTimeout& value) { SetHttp2(value); return *this;}

    
    inline ListenerTimeout& WithHttp2(HttpTimeout&& value) { SetHttp2(std::move(value)); return *this;}


    
    inline const TcpTimeout& GetTcp() const{ return m_tcp; }

    
    inline bool TcpHasBeenSet() const { return m_tcpHasBeenSet; }

    
    inline void SetTcp(const TcpTimeout& value) { m_tcpHasBeenSet = true; m_tcp = value; }

    
    inline void SetTcp(TcpTimeout&& value) { m_tcpHasBeenSet = true; m_tcp = std::move(value); }

    
    inline ListenerTimeout& WithTcp(const TcpTimeout& value) { SetTcp(value); return *this;}

    
    inline ListenerTimeout& WithTcp(TcpTimeout&& value) { SetTcp(std::move(value)); return *this;}

  private:

    GrpcTimeout m_grpc;
    bool m_grpcHasBeenSet;

    HttpTimeout m_http;
    bool m_httpHasBeenSet;

    HttpTimeout m_http2;
    bool m_http2HasBeenSet;

    TcpTimeout m_tcp;
    bool m_tcpHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
